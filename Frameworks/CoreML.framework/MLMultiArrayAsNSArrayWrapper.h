/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray {

	MLMultiArray* _multiArray;

}

@property (retain) MLMultiArray * multiArray;              //@synthesize multiArray=_multiArray - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(MLMultiArray *)multiArray;
-(id)initWrappingMultiArray:(id)arg1 ;
@end

