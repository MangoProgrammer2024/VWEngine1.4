// Filters.h
#pragma once
#ifndef FILTERS_H
#define FILTERS_H

#include <string>

struct Filter {
    int g_nbFilterId;

    // Virtual function to be overridden by derived classes if needed
    virtual void g_nbAddFilter(const std::string& gFilterItem) = 0;
    
    // Function to return the filter item, needs implementation
    virtual const std::string& gFilterItem() const = 0;

    // Enum for filter types
    enum g_nbFilterType {
        TEXTURE_FILTER = 0,
        BRUSH_FILTER,
        ENTITY_FILTER
    };

    // Static table for global filter data
    struct __g_nbGlobalFilterTable__ {
        void Flush();
        void Delete();
        void Add();

        // Static array with some size; defining a size or initializer is necessary
        static constexpr int maxItems = 100;
        static float g_nbMaxFilterItems[maxItems];
        static std::size_t * g_nbFilterItemSize[maxItems];
    };
};

// Initialize static member
float Filter::__g_nbGlobalFilterTable__::g_nbMaxFilterItems[__g_nbGlobalFilterTable__::maxItems] = {};

#endif // FILTERS_H

