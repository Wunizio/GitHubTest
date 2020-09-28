// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GitHubTest : ModuleRules
{
	public GitHubTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
