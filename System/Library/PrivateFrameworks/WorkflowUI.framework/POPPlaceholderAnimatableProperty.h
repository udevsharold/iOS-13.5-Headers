/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	double threshold;

}
-(id)name;
-(double)threshold;
-(/*^block*/id)writeBlock;
-(/*^block*/id)readBlock;
@end
