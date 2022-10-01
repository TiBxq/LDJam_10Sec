// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LD_10Sec : ModuleRules
{
	public LD_10Sec(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara" });
    }
}
