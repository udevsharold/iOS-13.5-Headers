/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPXNumberFilter.h>

@class NSArray;

@interface QLPXCompoundNumberFilter : QLPXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(double)updatedOutput;
@end

