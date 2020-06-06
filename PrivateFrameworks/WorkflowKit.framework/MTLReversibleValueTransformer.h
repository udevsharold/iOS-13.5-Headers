/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLValueTransformer.h>

@interface MTLReversibleValueTransformer : MTLValueTransformer
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)initWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
-(id)reverseTransformedValue:(id)arg1 success:(BOOL*)arg2 error:(id*)arg3 ;
@end

