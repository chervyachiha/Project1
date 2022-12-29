#pragma once

namespace mt 
{
	struct Point //координаты мяча
	{
		float x;
		float y;
	};

	struct Vec //координаты вектора скорости
	{
		float x;
		float y;
	};

	class Ball 
	{
	private:
		Point m_p0; //начальная позиция
		Vec m_velocity; //начальная скорость
		float m_r; //радиус
		sf::CircleShape* m_shape; //форма шара
	public:
		Ball(Point p0, float r, sf::Color color) 
		{
			m_p0 = p0;
			m_r = r;
			m_shape = new sf::CircleShape(m_r);
			m_shape->setFillColor(color);
			m_shape->setOrigin(m_r, m_r);
		}

		~Ball() 
		{
			delete m_shape;
		}

		void Move(double dt) 
		{
			m_p0.x += m_velocity.x * dt; //изменение координата шара по х
			m_p0.y += m_velocity.y * dt; //изменение координата шара по у
			m_shape->setPosition(m_p0.x, m_p0.y); //задание новых координат
		}

		sf::CircleShape* Get() { return m_shape; } //возврашение фигуры шара

		void SetVelocity(Vec v) //задает скорость
		{
			m_velocity = v;
		}
		Point GetPosition() { return m_p0; } //возвращает позицию
		Vec GetVelocity() { return m_velocity; } //возвращает скорость

		float Radius() { return m_r; } //возвращает радиус
	};
}