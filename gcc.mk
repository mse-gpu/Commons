# Version 	: 0.0.1
# Date		: 26.01.2012
# Author 	: Cedric.Bilat@he-arc.ch
#
# Contrainte
#
#	Dans les d�finitions de variables ci-dessous, ne laisser jamais d'espace � la fin!!!
#

#########
#public #
#########

#Option de compilation 
#Elles seront ensuite surcharg�es automatiquement (par exemple en fonction du type de la target)
#Version minimale : Ne rien metter laisser vierge!
CXXFLAGS:= -W -Wall 
#CXXFLAGS+= -O3 -mtune=core2 -frerun-loop-opt -fgcse -fomit-frame-pointer 
CXXFLAGS+= -O3 -frerun-loop-opt -fgcse -fomit-frame-pointer
CXXFLAGS+=  -fPIC
CXXFLAGS+= -fopenmp

#Option de compilation Static Lib 
#Version minimale : Ne rien metter laisser vierge!
ARFLAGS:=
 
#Option de linkage
#Elles seront ensuite surcharg�es automatiquement (par exemple en fonction du type de la target)
#Version minimale : Ne rien metter laisser vierge!
LDFLAGS:= -D_JNI_IMPLEMENTATION 

#Injection de variable dans le code (same as #define XXX YYY)
CODE_DEFINE_VARIABLES:=

#separateur est espace,sans extension .lib, sans prefixe lib
EXCLUDE_LIBRARY_FILES:=
ADD_LIBRARY_FILES:=

#########
#Private#
#########

COMPILATEUR:=g++
OS:=Linux

ROOT_MAKEFILE_PRIVATE:=../PRODUCTION/MANAGER/makefile/private
-include dataProject.mk
-include $(ROOT_MAKEFILE_PRIVATE)/fileSet.mk
-include $(ROOT_MAKEFILE_PRIVATE)/flags_GCC.mk
-include $(ROOT_MAKEFILE_PRIVATE)/makeFileCPP.mk
 
#########
#  End  #
#########