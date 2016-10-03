

#define SingleH(name) +(instancetype)shared##name;

#if __has_feature(objc_arc)
// ARC
#define SingleM(name) static id _instance;\
+ (instancetype)allocWithZone:(struct _NSZone *)zone{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
\
+ (instancetype)shared##name{\
\
return [[self alloc] init];\
}\
- (id)copyWithZone:(NSZone *)zone{\
\
return _instance;\
}\
\
- (id)mutableCopyWithZone:(NSZone *)zone{\
\
return _instance;\
}

#else
// MRC
#define SingleM(name) static id _instance;\
+ (instancetype)allocWithZone:(struct _NSZone *)zone{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
\
+ (instancetype)shared##name{\
\
return [[self alloc] init];\
}\
- (id)copyWithZone:(NSZone *)zone{\
\
return _instance;\
}\
\
- (id)mutableCopyWithZone:(NSZone *)zone{\
\
return _instance;\
}\
- (oneway void)release{\
    \
}\
\
- (instancetype)retain{\
    return _instance;\
}\
- (NSUInteger)retainCount{\
    return MAXFLOAT;\
}

#endif