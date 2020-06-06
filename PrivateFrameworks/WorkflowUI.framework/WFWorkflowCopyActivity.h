/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity {

	NSURL* _excludedURL;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * excludedURL;              //@synthesize excludedURL=_excludedURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithExcludedURL:(id)arg1 ;
-(NSURL *)excludedURL;
@end

