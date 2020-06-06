/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _WKFocusedElementInfo, _WKFormInputSession;
@class NSDictionary, SFFormAutoFillFrameHandle, WBSFormMetadata;

@interface _SFFormAutoFillInputSession : NSObject {

	id<_WKFocusedElementInfo> _focusedElementInfo;
	NSDictionary* _autoFillInputSessionUserObject;
	id<_WKFormInputSession> _formInputSession;
	SFFormAutoFillFrameHandle* _frameHandle;
	WBSFormMetadata* _formMetadata;

}

@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo;               //@synthesize focusedElementInfo=_focusedElementInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoFillInputSessionUserObject;              //@synthesize autoFillInputSessionUserObject=_autoFillInputSessionUserObject - In the implementation block
@property (nonatomic,readonly) id<_WKFormInputSession> formInputSession;                   //@synthesize formInputSession=_formInputSession - In the implementation block
@property (nonatomic,readonly) SFFormAutoFillFrameHandle * frameHandle;                    //@synthesize frameHandle=_frameHandle - In the implementation block
@property (nonatomic,readonly) WBSFormMetadata * formMetadata;                             //@synthesize formMetadata=_formMetadata - In the implementation block
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(id)_initWithFormInputSession:(id)arg1 focusedElement:(id)arg2 ;
-(void)_updateAutoFillInputSessionUserObject:(id)arg1 ;
-(id<_WKFormInputSession>)formInputSession;
-(id)initWithFormInputSession:(id)arg1 ;
-(id)initWithFocusedElement:(id)arg1 ;
-(id)autoFillInputSessionByReplacingInputSessionUserObject:(id)arg1 ;
-(NSDictionary *)autoFillInputSessionUserObject;
-(SFFormAutoFillFrameHandle *)frameHandle;
-(WBSFormMetadata *)formMetadata;
@end

