/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _shadowFlags;
	CGSize _shadowOffset;
	double _shadowBlurRadius;
	NSColor* _shadowColor;

}

@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowBlurRadius; 
@property (nonatomic,retain) id shadowColor; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)shadow;
+(id)defaultShadowColor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)applyToGraphicsContext:(id)arg1 ;
-(double)shadowBlurRadius;
-(void)setShadowBlurRadius:(double)arg1 ;
-(id)shadowColor;
-(void)setShadowColor:(id)arg1 ;
-(id)initWithShadow:(id)arg1 ;
@end

