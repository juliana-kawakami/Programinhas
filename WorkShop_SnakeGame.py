import pygame
import random
import time

pygame.init()

width = 400
height = 400
x, y = 200, 200
delta_x, delta_y = 10, 0
food_x = random.randrange(0, width)//10*10
food_y = random.randrange(0, height)//10*10

game_over = False

body_list = [(x, y)]
clock = pygame.time.Clock()

font = pygame.font.SysFont(('bahnschrift'), 25)

game_screen = pygame.display.set_mode((width, height))
pygame.display.set_caption('Snake Game')

def snake():
	global x, y, food_x, food_y, game_over
	global delta_x, delta_y, body_list

	x = (delta_x + x)%width
	y = (delta_y + y)%height

	if (x, y) in body_list:
		game_over = True
		return

	body_list.append((x, y))

	if(food_x == x and food_y == y):
		while((food_x, food_y) in body_list):
			food_x = random.randrange(0, width)//10*10
			food_y = random.randrange(0, height)//10*10
	else:
		del body_list[0]
			
	
	game_screen.fill((0, 0, 0))

	score = font.render("Score: " + str(len(body_list)-1), True, (255, 255, 0))
	game_screen.blit(score, [0, 0])	

	pygame.draw.rect((game_screen), (255, 255, 255), [x, y, 10, 10])
	pygame.draw.rect((game_screen), (0, 0, 255), [food_x, food_y, 10, 10])
	for(i, j) in body_list:
		pygame.draw.rect((game_screen), (255, 255, 255), [i,  j, 10, 10])
	pygame.display.update()
	

while True:
	if game_over:
		game_screen.fill((0, 0, 0))
		msg = font.render("GAME OVER", True, (255, 255, 255))
		game_screen.blit(msg, [width//3, height//3])
		pygame.display.update()
		time.sleep(5)
		pygame.quit()
		quit()
	events = pygame.event.get()
	for event in events:
		if event.type == pygame.QUIT:
			pygame.quit()
			quit()
		if event.type == pygame.KEYDOWN:
			if event.key == pygame.K_LEFT:
				if delta_x != 10:				
					delta_x = -10
				delta_y = 0
			elif event.key == pygame.K_RIGHT:
				if delta_x != -10:
					delta_x = 10
				delta_y = 0
			elif event.key == pygame.K_UP:
				delta_x = 0
				if delta_y != 10:
					delta_y = -10
			elif event.key == pygame.K_DOWN:
				delta_x = 0
				if delta_y != -10:
					delta_y = 10
			else:
				continue
			snake()
	if(not events):
		snake()
	clock.tick(10)


