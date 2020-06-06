/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject {

	NSString* _title;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
