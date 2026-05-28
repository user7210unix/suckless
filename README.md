# Suckless Unix Workstation

A minimal X11-based Unix workstation built around the suckless philosophy:

> Keep it simple, small, and hackable.

This setup is fully patch-driven and avoids heavyweight desktop environments.

---

# Core Components

## Window Manager
- **dwm** — dynamic tiling window manager (patched)

## Terminal
- **st** — simple terminal emulator (patched)

## Launcher
- **dmenu** — minimal application launcher (patched)

---

# Applied Patches

## dwm
- ✔ gaps support
- ✔ (optional) tiling removal of legacy `tile()` override
- ✔ custom layout adjustments

## st
- ✔ scrollback ring buffer
- ✔ opacity support (alpha)
- ✔ border support
- ✔ font customization
- ✔ color theme integration

## dmenu
- ✔ alpha transparency support
- ✔ center patch
- ✔ grid mode (-g columns)
- ✔ border width support
- ✔ color + font customization

---

# Color Palette (Alabaster Dark Variant)

Used consistently across dwm, st, and dmenu:

```txt
Background:   #0E1415
Foreground:   #D6D6D6

Black:        #0E1415
Red:          #e25d56
Green:        #73ca50
Yellow:       #e9bf57
Blue:         #4a88e4
Magenta:      #915caf
Cyan:         #4FA8B8
White:        #D6D6D6

Bright Black:  #5E6A6E
Bright Red:    #f36868
Bright Green:  #88db3f
Bright Yellow: #f0bf7a
Bright Blue:   #6f8fdb
Bright Magenta:#e987e9
Bright Cyan:   #5BBBCB
Bright White:  #FFFFFF
