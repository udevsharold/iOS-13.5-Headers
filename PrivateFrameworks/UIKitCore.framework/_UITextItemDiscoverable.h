/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextItemDiscoverable <NSObject>
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@optional
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@required
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@end

