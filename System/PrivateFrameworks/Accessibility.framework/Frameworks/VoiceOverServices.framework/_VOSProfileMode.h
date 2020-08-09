/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSScreenreaderMode, NSMutableSet;

@interface _VOSProfileMode : NSObject <NSSecureCoding> {

	VOSScreenreaderMode* _mode;
	NSMutableSet* _commands;

}

@property (nonatomic,retain) VOSScreenreaderMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSMutableSet * commands;                 //@synthesize commands=_commands - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileModeWitMode:(id)arg1 ;
+(id)profileModeWithStringValue:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(VOSScreenreaderMode *)arg1 ;
-(VOSScreenreaderMode *)mode;
-(NSMutableSet *)commands;
-(void)setCommands:(NSMutableSet *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(id)_initWithMode:(id)arg1 commands:(id)arg2 ;
@end
