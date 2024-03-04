using UnrealBuildTool;

public class capstoneClientTarget : TargetRules
{
	public capstoneClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("capstone");
	}
}
