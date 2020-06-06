/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientColorStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {

	psdGradientColor leadOutColor;

}
+(void)initialize;
+(id)doubleColorStopWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(psdGradientColor)leadOutColor;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(psdGradientColor)leadInColor;
@end

