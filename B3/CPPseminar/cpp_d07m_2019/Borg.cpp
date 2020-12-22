/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** TODO: add description
*/

#include "Borg.hpp"
#include <ostream>
#include <iostream>

Borg::Ship::Ship(int weaponFrequency, short repair) : _side(300),
_maxWarp(9), _home(UNICOMPLEX), _location(UNICOMPLEX), _shield(100),
_weaponFrequency(weaponFrequency), _repair(repair)
{
    std::cout << "We are the Borgs. Lower your shields and surrender "
                 "yourselves unconditionally." << std::endl << "Your "
                "biological characteristics and technologies will be "
                "assimilated." << std::endl << "Resistance is futile." <<
                std::endl;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
}

void Borg::Ship::checkCore()
{
    std::string stable;

    if (_core->checkReactor()->isStable()) {
        stable = "Everything is in order.";
    } else {
        stable = "Critical failure imminent.";
    }
    std::cout << stable << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp <= (int)_maxWarp && d != _location && _core->checkReactor()
        ->isStable()) {
        _location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(int warp)
{
    if (warp <= (int)_maxWarp && _core->checkReactor()
        ->isStable()) {
        _location = _home;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(Destination d)
{
    if (d != _location && _core->checkReactor()->isStable()) {
        _location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move()
{
    if (_core->checkReactor()->isStable()) {
        _location = _home;
        return (true);
    }
    return (false);
}

int Borg::Ship::getShield()
{
    return (_shield);
}

void Borg::Ship::setShield(int shield)
{
    _shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return (_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    _weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return (_repair);
}

void Borg::Ship::setRepair(short repair)
{
    _repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(_weaponFrequency);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->getCore()->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::repair()
{
    if (_repair > 0) {
        _repair--;
        _shield = 100;
        std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    } else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}