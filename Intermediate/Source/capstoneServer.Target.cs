using UnrealBuildTool;

public class capstoneServerTarget : TargetRules
{
	public capstoneServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("capstone");
	}
}
