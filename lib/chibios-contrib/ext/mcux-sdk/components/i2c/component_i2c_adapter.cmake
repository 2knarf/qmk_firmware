if(NOT COMPONENT_I2C_ADAPTER_INCLUDED)

    set(COMPONENT_I2C_ADAPTER_INCLUDED true CACHE BOOL "component_i2c_adapter component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/fsl_adapter_i2c.c
    )

    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/.
    )


    include(driver_common)
    include(driver_i2c)

endif()