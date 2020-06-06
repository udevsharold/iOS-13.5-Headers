/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTransactionalComponentDataSourceStateModifying;
@class CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject {

	id<CKTransactionalComponentDataSourceStateModifying> _modification;
	CKTransactionalComponentDataSourceState* _state;

}

@property (nonatomic,readonly) id<CKTransactionalComponentDataSourceStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
-(CKTransactionalComponentDataSourceState *)state;
-(id<CKTransactionalComponentDataSourceStateModifying>)modification;
-(id)initWithModification:(id)arg1 state:(id)arg2 ;
@end

