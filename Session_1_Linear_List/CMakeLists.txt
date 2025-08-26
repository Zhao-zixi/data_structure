set(Session_1_Linear_List_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/linear_list.c
)

add_library(Session1LinearList STATIC ${Session_1_Linear_List_SRC})

target_include_directories(Session1LinearList
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
