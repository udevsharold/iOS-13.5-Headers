/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HLPHelpTopicViewControllerDelegate <NSObject>
@optional
-(void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;

@required
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;

@end

