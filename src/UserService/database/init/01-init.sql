

CREATE TABLE users(
    id bigint PRIMARY KEY,
    name text,
    role_id integer,
    profile_image_key text
);


CREATE TABLE roles(
    id integer,
    name text,
    description text
);

CREATE TABLE role_permissions(
    role_id integer,
    code text
);