/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:45:29 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/07/19 19:51:00 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe() {}

PMergeMe::~PMergeMe() {}

/* ************************************************************************** */
/*  GENERIC UTILS FUNCTIONS                                                   */
/* ************************************************************************** */

void PMergeMe::parseInput(int argc, char **argv)
{
    _inputVector.clear();
    _inputDeque.clear();

    for (int i = 1; i < argc; ++i)
    {
        std::string arg(argv[i]);

        for (size_t j = 0; j < arg.length(); ++j)
        {
            if (!std::isdigit(arg[j]))
                throw std::invalid_argument("Error: invalid input (non digit char).");
        }
        long val = std::strtol(arg.c_str(), NULL, 10);
        if (val < 0 || val > INT_MAX)
            throw std::out_of_range("Error: A value is out of int range.");
        
        _inputVector.push_back(static_cast<int>(val));
        _inputDeque.push_back(static_cast<int>(val));
    }
}

void PMergeMe::checkDuplicates(const std::vector<int>& data) const
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        for (size_t j = i + 1; j < data.size(); ++j)
        {
            if (data[i] == data[j])
            {
                std::ostringstream oss;
                oss << "Error: duplicate value found: " << data[i];
                throw std::runtime_error(oss.str());
            }
        }
    }
}

void PMergeMe::checkDuplicates(const std::deque<int>& data) const
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        for (size_t j = i + 1; j < data.size(); ++j)
        {
            if (data[i] == data[j])
            {
                std::ostringstream oss;
                oss << "Error: dulicate value found: " << data[i];
                throw std::runtime_error(oss.str());
            }
        }
    }
}
/* ************************************************************************** */
/*  VECTORS FORD JOHNSON                                                      */
/* ************************************************************************** */

void PMergeMe::createPairVec(std::vector<int>& data)
{
    _smallerPairsVec.clear();
    _largerPairsVec.clear();
    _hasLeftOverVec = false;
    _leftOverVec = 0;

    size_t i = 0;
    while (i + 1 < data.size())
    {
        int a = data[i];
        int b = data[i + 1];

        if (a < b)
        {
            _smallerPairsVec.push_back(a);
            _largerPairsVec.push_back(b);
        }
        else
        {
            _smallerPairsVec.push_back(b);
            _largerPairsVec.push_back(a);
        }
        i += 2;
    }
    if (i < data.size())
    {
        _hasLeftOverVec = true;
        _leftOverVec = data[i];
    }
}

static void merge(std::vector<int>& vec, int left, int mid, int right)
{
    std::vector<int> leftPart;
    std::vector<int> rightPart;
    
    for (int i = left; i <= mid; ++i)
        leftPart.push_back(vec[i]);
    for (int i = mid + 1; i <= right; ++i)
        rightPart.push_back(vec[i]);

    size_t i = 0, j = 0;
    int k = left;

    while (i < leftPart.size() && j < rightPart.size())
    {
        if (leftPart[i] <= rightPart[j])
            vec[k++] = leftPart[i++];
        else
            vec[k++] = rightPart[j++];
    }
    while (i < leftPart.size())
        vec[k++] = leftPart[i++];
    while (j < rightPart.size())
        vec[k++] = rightPart[j++];
}

/* ************************************************************************** */
/*  DEQUE FORD JOHNSON                                                        */
/* ************************************************************************** */

void PMergeMe::createPairDeq(std::deque<int>& data)
{
    _smallerPairsDeq.clear();
    _largerPairsDeq.clear();
    _hasLeftOverDeq = false;
    _leftOverDeq = 0;

    size_t i = 0;
    while (i + 1 < data.size())
    {
        int a = data[i];
        int b = data[i + 1];

        if (a < b)
        {
            _smallerPairsDeq.push_back(a);   
            _largerPairsDeq.push_back(b);
        }
        else
        {
            _smallerPairsDeq.push_back(b);
            _largerPairsDeq.push_back(a);   
        }
        i += 2;
    }
    if (i < data.size())
    {
        _hasLeftOverDeq = true;
        _leftOverDeq = data[i];
    }
}