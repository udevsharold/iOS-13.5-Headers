/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* _optionArray;

}
+(id)subcommandWithName:(id)arg1 ;
-(int)run;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)stop;
-(void)showHelp;
-(void)addOption:(char)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(id)optionArray;
-(id)subcommandName;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(void)addOptions;
-(void)stopDueToSigTerm;
@end

