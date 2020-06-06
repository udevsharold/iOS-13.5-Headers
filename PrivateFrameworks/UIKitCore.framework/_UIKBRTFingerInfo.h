/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIKBRTFingerInfo : NSObject <NSCopying> {

	BOOL _unknownSeen;
	double _radius;
	double _lastSeenTimestamp;
	unsigned long long _identity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double lastSeenTimestamp;                 //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long identity;              //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                         //@synthesize unknownSeen=_unknownSeen - In the implementation block
@property (nonatomic,readonly) double feedbackAlpha; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(unsigned long long)identity;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setIdentity:(unsigned long long)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setLastSeenTimestamp:(double)arg1 ;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(double)lastSeenTimestamp;
-(BOOL)unknownSeen;
-(double)feedbackAlpha;
@end

