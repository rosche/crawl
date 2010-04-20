/*
 *  File:       tilereg_mem.h
 *  Created by: ennewalker on Sat Jan 5 01:33:53 2008 UTC
 */

#ifdef USE_TILE
#ifndef TILEREG_MEM_H
#define TILEREG_MEM_H

#include "tilereg-spl.h"

class MemoriseRegion : public SpellRegion
{
public:
    MemoriseRegion(const TileRegionInit &init);

    virtual void update();
    virtual int handle_mouse(MouseEvent &event);
    virtual bool update_tip_text(std::string &tip);
    virtual bool update_tab_tip_text(std::string &tip, bool active);

    virtual const std::string name() const { return "Memorisation"; }

protected:
    virtual void draw_tag();
    virtual void activate();
};

#endif
#endif
