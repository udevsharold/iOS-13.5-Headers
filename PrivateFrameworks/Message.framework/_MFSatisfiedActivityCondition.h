/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFActivityCondition.h>

@class EFObservable, NSString;

@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
-(BOOL)isSatisfied;
-(EFObservable *)conditionsObservable;
@end

