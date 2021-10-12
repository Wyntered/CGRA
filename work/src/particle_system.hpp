#pragma once
#include <vector>
#include <emitter.hpp>
#include <glm/glm.hpp>

class ParticleSystem {
public: 
	ParticleSystem();
	ParticleSystem(GLuint shader);
	void update();
	void draw(glm::mat4 view, glm::mat4 proj);
	float getRandom(float low, float high);
	void parameters(float radius, float wind, float density, float scale, float lrg_wind, float fire_height);

	std::vector<Emitter> systems;
	GLuint shader = 0;
	GLuint logShader = 0;
	float prevRadius = 5;
	float radius = 2.5;
	float wind = 0.04; 
	float density = 50;
	float scale_f = 0.2;
	float lrg_wind = 0.0;
private:
	//origin positions
	float x = -6.0;
	float y = 3.5;
	float z = -6.0;
};