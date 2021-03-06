$NetBSD: patch-src_SFML_Window_WindowImpl.cpp,v 1.1 2020/05/21 08:42:00 plunky Exp $

add NetBSD support

--- src/SFML/Window/WindowImpl.cpp.orig	2018-10-15 19:41:39.000000000 +0000
+++ src/SFML/Window/WindowImpl.cpp
@@ -38,7 +38,7 @@
     #include <SFML/Window/Win32/WindowImplWin32.hpp>
     typedef sf::priv::WindowImplWin32 WindowImplType;
 
-#elif defined(SFML_SYSTEM_LINUX) || defined(SFML_SYSTEM_FREEBSD) || defined(SFML_SYSTEM_OPENBSD)
+#elif defined(SFML_SYSTEM_LINUX) || defined(SFML_SYSTEM_FREEBSD) || defined(SFML_SYSTEM_NETBSD) || defined(SFML_SYSTEM_OPENBSD)
 
     #include <SFML/Window/Unix/WindowImplX11.hpp>
     typedef sf::priv::WindowImplX11 WindowImplType;
