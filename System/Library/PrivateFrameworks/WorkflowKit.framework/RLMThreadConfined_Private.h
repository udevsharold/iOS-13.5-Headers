/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RLMThreadConfined_Private <NSObject>
@property (nonatomic,readonly) id objectiveCMetadata; 
@required
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(id)objectiveCMetadata;

@end

