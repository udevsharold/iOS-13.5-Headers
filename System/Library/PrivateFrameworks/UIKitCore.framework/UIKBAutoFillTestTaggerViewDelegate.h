/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>
@optional
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;
-(void)taggerViewDidFinish:(id)arg1;

@end
