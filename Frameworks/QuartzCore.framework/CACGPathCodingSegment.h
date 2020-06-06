/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CACGPathCodingSegment : NSObject <NSSecureCoding> {

	int _type;
	CGPoint _points[3];

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
@end

