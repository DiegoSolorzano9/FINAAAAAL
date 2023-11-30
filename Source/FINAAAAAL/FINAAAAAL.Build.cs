// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FINAAAAAL : ModuleRules
{
	public FINAAAAAL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
