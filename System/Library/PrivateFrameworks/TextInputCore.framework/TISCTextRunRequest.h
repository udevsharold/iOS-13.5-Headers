/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject {

	NSArray* _strings;
	CGColorRef _color;
	double _maxFontSize;
	double _minFontSize;
	BOOL _allowTruncation;
	NSString* _truncationSentinel;
	unsigned long long _widthGroup;

}
+(id)textRunRequestWithStrings:(id)arg1 color:(CGColorRef)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(BOOL)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7 ;
-(void)dealloc;
-(CGColorRef)color;
-(double)minFontSize;
-(id)strings;
-(double)maxFontSize;
-(id)truncationSentinel;
-(BOOL)allowTruncation;
-(unsigned long long)widthGroup;
@end

