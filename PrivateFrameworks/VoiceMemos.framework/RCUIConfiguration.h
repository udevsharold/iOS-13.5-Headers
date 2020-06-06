/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RCUIConfiguration : NSObject <NSCopying> {

	NSString* _debugIdentifier;

}

@property (nonatomic,retain) NSString * debugIdentifier;              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
@end

