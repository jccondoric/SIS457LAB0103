// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SIS457LAB0103 : ModuleRules
{
	public SIS457LAB0103(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
