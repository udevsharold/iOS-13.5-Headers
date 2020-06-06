/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:43 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, JXHTTPOperationQueue, NSOperationQueue, NSURL;

@interface TMAPIClient : NSObject {

	NSString* _OAuthToken;
	NSString* _OAuthTokenSecret;
	NSDictionary* _customHeaders;
	double _timeoutInterval;
	JXHTTPOperationQueue* _queue;
	NSOperationQueue* _defaultCallbackQueue;
	NSURL* _baseURL;

}

@property (nonatomic,retain) JXHTTPOperationQueue * queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * OAuthConsumerKey; 
@property (nonatomic,copy) NSString * OAuthConsumerSecret; 
@property (nonatomic,copy) NSString * OAuthToken;                                  //@synthesize OAuthToken=_OAuthToken - In the implementation block
@property (nonatomic,copy) NSString * OAuthTokenSecret;                            //@synthesize OAuthTokenSecret=_OAuthTokenSecret - In the implementation block
@property (nonatomic,copy) NSDictionary * customHeaders;                           //@synthesize customHeaders=_customHeaders - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                               //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,retain) NSOperationQueue * defaultCallbackQueue;              //@synthesize defaultCallbackQueue=_defaultCallbackQueue - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                      //@synthesize baseURL=_baseURL - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(JXHTTPOperationQueue *)arg1 ;
-(JXHTTPOperationQueue *)queue;
-(NSURL *)baseURL;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)customHeaders;
-(NSOperationQueue *)defaultCallbackQueue;
-(void)userInfo:(/*^block*/id)arg1 ;
-(BOOL)handleOpenURL:(id)arg1 ;
-(NSString *)OAuthToken;
-(void)setOAuthToken:(NSString *)arg1 ;
-(NSString *)OAuthTokenSecret;
-(void)setOAuthTokenSecret:(NSString *)arg1 ;
-(void)authenticate:(id)arg1 webView:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)xAuth:(id)arg1 password:(id)arg2 callback:(/*^block*/id)arg3 ;
-(NSString *)OAuthConsumerKey;
-(void)setOAuthConsumerKey:(NSString *)arg1 ;
-(NSString *)OAuthConsumerSecret;
-(void)setOAuthConsumerSecret:(NSString *)arg1 ;
-(id)userInfoRequest;
-(id)dashboardRequest:(id)arg1 ;
-(void)dashboard:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)likesRequest:(id)arg1 ;
-(void)likes:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)followingRequest:(id)arg1 ;
-(void)following:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)followRequest:(id)arg1 ;
-(void)follow:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)unfollowRequest:(id)arg1 ;
-(void)unfollow:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)likeRequest:(id)arg1 reblogKey:(id)arg2 ;
-(void)like:(id)arg1 reblogKey:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)unlikeRequest:(id)arg1 reblogKey:(id)arg2 ;
-(void)unlike:(id)arg1 reblogKey:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)avatar:(id)arg1 size:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)avatar:(id)arg1 size:(unsigned long long)arg2 queue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)blogInfoRequest:(id)arg1 ;
-(void)blogInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)followersRequest:(id)arg1 parameters:(id)arg2 ;
-(void)followers:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)postsRequest:(id)arg1 type:(id)arg2 parameters:(id)arg3 ;
-(void)posts:(id)arg1 type:(id)arg2 parameters:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)queueRequest:(id)arg1 parameters:(id)arg2 ;
-(void)queue:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)draftsRequest:(id)arg1 parameters:(id)arg2 ;
-(void)drafts:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)submissionsRequest:(id)arg1 parameters:(id)arg2 ;
-(void)submissions:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)likesRequest:(id)arg1 parameters:(id)arg2 ;
-(void)likes:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)postRequest:(id)arg1 type:(id)arg2 parameters:(id)arg3 ;
-(void)post:(id)arg1 type:(id)arg2 parameters:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)editPostRequest:(id)arg1 parameters:(id)arg2 ;
-(void)editPost:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)reblogPostRequest:(id)arg1 parameters:(id)arg2 ;
-(void)reblogPost:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)deletePostRequest:(id)arg1 id:(id)arg2 ;
-(void)deletePost:(id)arg1 id:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)textRequest:(id)arg1 parameters:(id)arg2 ;
-(void)text:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)quoteRequest:(id)arg1 parameters:(id)arg2 ;
-(void)quote:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)linkRequest:(id)arg1 parameters:(id)arg2 ;
-(void)link:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)chatRequest:(id)arg1 parameters:(id)arg2 ;
-(void)chat:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)photoRequest:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 parameters:(id)arg5 ;
-(void)photo:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 parameters:(id)arg5 callback:(/*^block*/id)arg6 ;
-(id)videoRequest:(id)arg1 filePath:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 parameters:(id)arg5 ;
-(void)video:(id)arg1 filePath:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 parameters:(id)arg5 callback:(/*^block*/id)arg6 ;
-(id)audioRequest:(id)arg1 filePath:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 parameters:(id)arg5 ;
-(void)audio:(id)arg1 filePath:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 parameters:(id)arg5 callback:(/*^block*/id)arg6 ;
-(id)taggedRequest:(id)arg1 parameters:(id)arg2 ;
-(void)tagged:(id)arg1 parameters:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)getRequestWithPath:(id)arg1 parameters:(id)arg2 ;
-(id)postRequestWithPath:(id)arg1 parameters:(id)arg2 ;
-(id)multipartPostRequest:(id)arg1 type:(id)arg2 parameters:(id)arg3 filePathArray:(id)arg4 contentTypeArray:(id)arg5 fileNameArray:(id)arg6 ;
-(id)multipartBodyForParameters:(id)arg1 filePathArray:(id)arg2 contentTypeArray:(id)arg3 fileNameArray:(id)arg4 ;
-(void)signRequest:(id)arg1 withParameters:(id)arg2 ;
-(void)sendRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)sendRequest:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)URLWithPath:(id)arg1 ;
-(void)setDefaultCallbackQueue:(NSOperationQueue *)arg1 ;
@end

