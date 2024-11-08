# Netflix-Inspired Movie Management System

## Project Overview
This C++ project simulates a Netflix-style movie management system where users can browse, add, search, and delete movies within different categories. The system is structured to manage movie data using circular linked lists for efficient categorization, and it includes key features like sorting, category lookup, and movie indexing.

## Features

### 1. Netflix Categories
- Categories similar to Netflix genres, such as **"Action," "Thriller," "Romance,"** and **"Children."**
- Each category is managed through a circular linked list structure, providing organized browsing akin to Netflix's genre sections.

### 2. Movie Management Features
- **Add Movie**: Adds new movies to the system, assigned to a specific genre.
- **Search Movie**: Enables users to search for a movie by its title within categories, similar to Netflix’s search function.
- **Delete Movie**: Allows users to delete specific movies from categories.
- **Index Retrieval**: Finds the exact position of a movie within a genre, offering quick lookup.
- **Display Movies**: Sorts and displays movies alphabetically within each category.

### 3. Genre (Category) Management
- **Add Genre**: Adds a new category (or genre) to the browsing options.
- **Search Genre**: Searches for a specific genre by name, helping users locate preferred movie types quickly.
- **Delete Genre**: Removes an entire genre from the system, reflecting dynamic content updates.

### 4. Utility Functions
- **Leap Year Check**: Determines if a specified year is a leap year, adding a touch of time-tracking for content releases.
- **Sort Movies**: Sorts movies alphabetically within each category, simulating Netflix's organization for easy browsing.

## Project Structure
The project contains several classes, each with distinct responsibilities:

- **Node**: Represents individual nodes for categories, functioning as genre containers.
- **CLLNode**: Manages circular linked list nodes specifically for the movies in each genre.
- **Movie** and **MovieCategories**: Handle movie-specific details and category-related functions.
- **Date**: Provides date functionalities, including checking if a year is a leap year (for release date tracking).

