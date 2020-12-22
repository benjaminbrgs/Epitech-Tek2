/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** SFML errors (exception class)
*/

#include "SDLError.hpp"

using namespace arc;

ArcadeError::ArcadeError(const std::string &component, const std::string &message):
    _component(component), _message(message)
{}

const char *ArcadeError::what() const noexcept
{
    return (_message.c_str());
}

const std::string &ArcadeError::getComponent() const noexcept
{
    return (_component);
}

SDLError::SDLError(const std::string &error): ArcadeError("SDL", error)
{}
