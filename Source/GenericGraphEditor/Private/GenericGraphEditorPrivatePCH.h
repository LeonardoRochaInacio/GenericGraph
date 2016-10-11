// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "CoreUObject.h"
#include "UnrealEd.h"

#include "GenericGraph.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.
#include "IGenericGraphEditor.h"

#define LOG_WARNING(FMT, ...) UE_LOG(GenericGraphEditor, Warning, (FMT), ##__VA_ARGS__)
