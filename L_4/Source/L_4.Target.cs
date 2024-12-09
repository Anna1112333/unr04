// Netology

using UnrealBuildTool;
using System.Collections.Generic;

public class L_4Target : TargetRules
{
	public L_4Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "L_4" } );
	}
}
