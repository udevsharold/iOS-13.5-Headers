/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SFBannerModel : NSObject {

	NSString* _title;
	NSString* _message;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) id dismissHandler;                    //@synthesize dismissHandler=_dismissHandler - In the implementation block
+(id)bannerWithTitle:(id)arg1 message:(id)arg2 dismissHandler:(/*^block*/id)arg3 ;
-(NSString *)title;
-(NSString *)message;
-(id)dismissHandler;
@end
