/**
 * @file NexSwitch.h
 *
 * The definition of class NexSwitch. 
 *
 * @author huang xiaoming (email:<xiaoming.huang@itead.cc>)
 * @date 2016/9/13
 * @author Jyrki Berg 2/17/2019 (https://github.com/jyberg)
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 * 
 * @copyright 2020 Jyrki Berg
 *
 */

#pragma once 

#include "NexTouch.h"
class Nextion;
class NexObject;

/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexSwitch component. 
 *
 */
class NexSwitch: public NexTouch
{
    NexSwitch()=delete;
 
public: /* methods */

    /**
     * @copydoc NexObject::NexObject(Nextion*, uint8_t, uint8_t, const char*, const NexObject*)
     */
    NexSwitch(Nextion *nextion, uint8_t pid, uint8_t cid, const char *name, const NexObject* page=nullptr);
	

    /**
     * Get text attribute of component.
     *
     * @param buffer - buffer storing text returned. 
     * @param len - in buffer len / out saved string len excluding null char.  
     * 
     * @retval true - success. 
     * @retval false - failed.
     */
    bool getText(char *buffer, uint16_t &len);
    
    /**
     * Set text attribute of component.
     *
     * @param buffer - text buffer terminated with '\0'. 
     * @return true if success, false for failure. 
     */
    bool setText(const char *buffer);    

    /**
     * Get val attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure 
     */	
    bool getValue(uint32_t *number);
	
    /**
     * Set val attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool setValue(uint32_t number);
	
    /**
     * Get bco attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure 
     */
    bool Get_background_color_bco(uint32_t *number);		
	
    /**
     * Set bco attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool Set_background_color_bco(uint32_t number);			
	
    /**
     * Get pco attribute of component
     *
     * @param number - buffer storing data retur
     * @return true if success, false for failure 
     */
    bool Get_font_color_pco(uint32_t *number);	

    /**
     * Set pco attribute of component
     *
     * @param number - To set up the data
     * @return true if success, false for failure
     */
    bool Set_font_color_pco(uint32_t number);
};
