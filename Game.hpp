#pragma once
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <C:\Users\msi-pc\source\repos\project\Ball.hpp>

namespace mt 
{
	class Game 
	{
	private:
		int m_width, m_height; //ширина, высота экранчика
		std::string m_caption; //название 
		sf::RenderWindow* m_window = nullptr; //задаем пустое окно
		
	public:
		Game() {}
		~Game();
		void SetCaption(const std::string& caption);
		void SetResolution(int width, int height);
		void Setup();
		void Run();
	};
}