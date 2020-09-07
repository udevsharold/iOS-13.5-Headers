/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBShutdownContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _fromUserPowerDown;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL fromUserPowerDown;                //@synthesize fromUserPowerDown=_fromUserPowerDown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setFromUserPowerDown:(BOOL)arg1 ;
-(BOOL)fromUserPowerDown;
@end
