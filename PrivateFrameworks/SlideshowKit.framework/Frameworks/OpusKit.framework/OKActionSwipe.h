/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionSwipeExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding> {

	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)swipeActionWithLocation:(CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
@end

