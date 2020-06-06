/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIStoryboardSegueTemplate, UIClassSwapper, UIViewController;

@interface UIStoryboardDecodingContext : NSObject {

	UIStoryboardSegueTemplate* _sourceSegueTemplate;
	id _sender;
	UIClassSwapper* _classSwapperTemplate;
	UIViewController* _parentViewController;
	long long _childViewControllerIndex;
	/*^block*/id _creator;

}

@property (nonatomic,retain) UIClassSwapper * classSwapperTemplate;                        //@synthesize classSwapperTemplate=_classSwapperTemplate - In the implementation block
@property (nonatomic,retain) UIStoryboardSegueTemplate * sourceSegueTemplate;              //@synthesize sourceSegueTemplate=_sourceSegueTemplate - In the implementation block
@property (nonatomic,retain) UIViewController * parentViewController;                      //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) long long childViewControllerIndex;                           //@synthesize childViewControllerIndex=_childViewControllerIndex - In the implementation block
@property (nonatomic,retain) id sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) id creator;                                                     //@synthesize creator=_creator - In the implementation block
-(id)sender;
-(void)setSender:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(UIStoryboardSegueTemplate *)sourceSegueTemplate;
-(void)setSourceSegueTemplate:(UIStoryboardSegueTemplate *)arg1 ;
-(UIClassSwapper *)classSwapperTemplate;
-(void)setClassSwapperTemplate:(UIClassSwapper *)arg1 ;
-(long long)childViewControllerIndex;
-(void)setChildViewControllerIndex:(long long)arg1 ;
-(id)creator;
-(void)setCreator:(id)arg1 ;
@end

