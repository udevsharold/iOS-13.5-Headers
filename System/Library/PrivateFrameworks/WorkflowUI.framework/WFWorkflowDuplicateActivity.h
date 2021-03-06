/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class WFWorkflow;

@interface WFWorkflowDuplicateActivity : UIActivity {

	/*^block*/id _dismissToHomeHandler;
	WFWorkflow* _workflow;

}

@property (nonatomic,retain) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) id dismissToHomeHandler;              //@synthesize dismissToHomeHandler=_dismissToHomeHandler - In the implementation block
+(id)workflowFromActivityItems:(id)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(id)dismissToHomeHandler;
-(void)setDismissToHomeHandler:(id)arg1 ;
@end

