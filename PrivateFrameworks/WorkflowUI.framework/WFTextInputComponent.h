/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	CKTypedComponentAction<> _beginAction;
	CKTypedComponentAction<> _doneAction;
	WFTextInputAttributes _attributes;

}

@property (nonatomic,readonly) WFTextInputAttributes attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> beginAction;              //@synthesize beginAction=_beginAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;               //@synthesize doneAction=_doneAction - In the implementation block
+(id)newWithAttributes:(const WFTextInputAttributes*)arg1 updateBlock:(/*^block*/id)arg2 beginAction:(CKTypedComponentAction<>)arg3 doneAction:(CKTypedComponentAction<>)arg4 size:(const CKComponentSize*)arg5 ;
-(WFTextInputAttributes)attributes;
-(id)updateBlock;
-(CKTypedComponentAction<>)doneAction;
-(CKTypedComponentAction<>)beginAction;
@end
